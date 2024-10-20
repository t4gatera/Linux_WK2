from setuptools import setup, Extension

# Define the extension module
module = Extension('hello', sources=['hello.c'])

# Run the setup
setup(name='hello',
      version='1.0',
      description='A simple "Hello World" C extension for Python',
      ext_modules=[module])

