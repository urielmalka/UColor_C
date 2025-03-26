"""
  #####   #####   #       #####   #####  
  #       #   #   #       #   #   #   #   
  #       #   #   #       #   #   #####  
  #       #   #   #       #   #   #  #
  #####   #####   #####   #####   #   #    
  By @urielmalka

  The Color Print Library is a C language utility that allows for colored text output in terminal applications. 
  It provides functions for printing text in various colors and styles, including bold, italic, and underlined text.

  Check my GitHub: https://github.com/urielmalka

"""


import ctypes
from enum import Enum
import platform

class Color(Enum):
    RED = 1
    GREEN = 2
    YELLOW = 3
    BLUE = 4
    MAGENTA = 5 
    CYAN = 6

# Load the shared library
if platform.system() == 'Windows':
    lib = ctypes.CDLL('./print-color.dll')
else:
    lib = ctypes.CDLL('./libprint-color.so')

# Define the argument types
lib.printc.argtypes = [ctypes.c_int, ctypes.c_char_p]
lib.printcb.argtypes = [ctypes.c_int, ctypes.c_char_p]
lib.printci.argtypes = [ctypes.c_int, ctypes.c_char_p]
lib.printcu.argtypes = [ctypes.c_int, ctypes.c_char_p]
lib.printcd.argtypes = [ctypes.c_int, ctypes.c_char_p]
lib.printcm.argtypes = [ctypes.c_int, ctypes.c_char_p]

def printc(color_code, message):
    lib.printc(color_code, message.encode('utf-8'))

def printcb(color_code, message):
    lib.printcb(color_code, message.encode('utf-8'))

def printci(color_code, message):
    lib.printci(color_code, message.encode('utf-8'))

def printcu(color_code, message):
    lib.printcu(color_code, message.encode('utf-8'))

def printcd(color_code, message):
    lib.printcd(color_code, message.encode('utf-8'))

def printcm(color_code, message):
    lib.printcm(color_code, message.encode('utf-8'))
