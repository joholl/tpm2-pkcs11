import subprocess, os

read_the_docs_build = os.environ.get('READTHEDOCS', None) == 'True'

if read_the_docs_build:
    subprocess.call('GENERATE_XML = YES cd ../doxygen; doxygen', shell=True)
