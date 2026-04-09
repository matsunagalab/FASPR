# INTRODUCTION

This package is for using FASPR (a program for side chain packing and mutant structure generation) from Python.
You can run FASPR programs as Python functions based on the C/C++ API.

# USAGE

When using this package, you need to import "py_FASPR".
If you want to generate mutated structure, you also need to input .txt sequence file.
The sequence file must be written by written in the single letter code for the amino acid residue.

```
import py_FASPR

py_FASPR.faspr(input_pdb='input.pdb', output_pdb='output.pdb', seq_file='seq.txt')
```

# INSTALLATION

Currently, the only method available is to clone and install this repository.
```
git clone https://github.com/matsunagalab/FASPR.git
cd FASPR
pip install -e .
```

# COPYRIGHT & CONTACT
Copyright (c) Xiaoqiang Huang. FASPR is free to academic users. For suggestions, please contact xiaoqiah@umich.edu or xiaoqiah@outlook.com.

# REFERENCES
1. Huang x, Pearce R, Zhang Y, FASPR: an open-source tool for fast and accurate protein side-chain packing. Bioinformatics (2020) 36: 3758-3765.
2. Huang X, Pearce R, Zhang Y. Toward the Accuracy and Speed of Protein Side-Chain Packing: A Systematic Study on Rotamer Libraries. J. Chem. Inf. Model. 2020; 60:410-420.
