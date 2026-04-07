from importlib.resources import files
from py_FASPR._core import faspr as _faspr

_DATA_DIR = str(files("py_FASPR.data"))

def faspr(input_pdb: str, output_pdb: str, seq_file: str):
    """Run FASPR - data_dir is resolved automatically."""
    _faspr(_DATA_DIR, input_pdb, output_pdb, seq_file)  