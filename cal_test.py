from setuptools import setup, Extension

# Define the extension module
module = Extension('arith', sources=['calc.c'])

# Run the setup
setup(name='arith',
      version='1.0',
      description='A C extension for basic arithmetic operations',
      ext_modules=[module])

