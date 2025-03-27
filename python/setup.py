from setuptools import setup, find_packages

# Read the content of README.md
with open("README.md", "r", encoding="utf-8") as fh:
    long_description = fh.read()

setup(
    name="PyUColor",
    version='0.22',
    packages=find_packages(),
    install_requires=[],
    description="A simple library for printing colored text in the terminal.",
    long_description=long_description,
    long_description_content_type="text/markdown",
    author="Uriel Malka",
    author_email="urielmlka1@gmail.com",
    url="https://github.com/urielmalka/Print-Color-C",  
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    python_requires='>=3.6',
)
