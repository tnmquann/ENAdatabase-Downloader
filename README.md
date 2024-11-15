# ENA Sequence Database Downloader
`ENASequence-Downloader` is a script designed for seamless downloading of FASTQ sequences and metadata from the European Nucleotide Archive (ENA). Developed in Python, this tool features a user-friendly command-line interface and offers faster download speeds compared to conventional methods such as `wget` or `curl`.

## License
This script is licensed under the Apache License, Version 2.0. You are free to use, modify, and distribute this project, provided that you comply with the terms of the license. This license includes conditions for redistribution and requires proper attribution. For more details, please refer to the LICENSE file or visit Apache License 2.0.

## Features
- **Easy to Use:** simplifies the process of downloading FASTQ sequences and metadata from ENA.
- **Compatibility:** optimized for Unix operating systems and maintains good compatibility with Windows.
- **Fast Load Speed:** increase download speeds compared to traditional tools like `wget` on Unix systems.
- **Customizable:** easily adjustable, allowing users to tailor the tool for specific download requirements.

## Requirements
To install the necessary Python packages, run:
```pip install -r requirements.txt```
This will install the following dependencies:
* python >= 3.10
* aria2 >= 1.36.0

## Options

```
 -if, --ifile DIR_TO_FILE                  Input list accession number by text file (*.txt, *.csv, .etc).
                                           Each accession should be written into separate lines.
 -il, --ilist STRING                       Input list accession number by string.
                                           Each accession should be separated by comma, without any spaces between. For example: accession_1,accession_2,...,accession_N.
 -o, --output DIR                          Path to output directory.
 -m, --meta_file NAME                      Change the name of metadata `*.csv` file output.
 -op, --download_option NUMBER             Change download option (default = 0).
                                           0: Download both `fastq.gz` files and metadata
                                           1: Download only metadata
                                           2: Download only `fastq.gz` files.
```

## How to cite
```
@misc{ENAsequences_download,
  author = {Vinh Chau and Ton Ngoc Minh Quan},
  title = {ENAsequences-Downloader},
  year = {2018},
  publisher = {GitHub},
  journal = {GitHub repository},
  howpublished = {\url{https://github.com/chauvinhtth13/ENAsequences-Downloader}},
}
```
Feel free to explore the different versions and choose the one that best fits your needs. Happy coding!
