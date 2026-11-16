### COMP 211 - Checkoff 3

Slides: https://docs.google.com/presentation/d/1_RWpv9l4WI5pjH5TH8Oo6j576qm7ySzngUw7hcMKSfM/edit?usp=sharing

# Run-Length Encoding (RLE)

Run-length encoding compresses data (lossless) by counting repeated values that appear next to each other. For instance, `AAAAABBB` becomes `5A3B`.

ChatGPT Conversation Link: https://chatgpt.com/share/6afb4eec-ba74-83ea-bb16-668a8b3efe30

## C Example

`rle.c` finds runs of repeated letters and prints each run's length and letter. The main method shows the output on three different inputs strings.

Use standard gcc-compilation to compile the code:

```bash
gcc rle.c -o rle
./rle
```

Running the code yields:

```text
AAAAAAAAAAAA -> 12A
ABCDEFGH -> 1A1B1C1D1E1F1G1H
ABABABAB -> 1A1B1A1B1A1B1A1B
```

## Interpretation

RLE is exceptionally good at compressing long "runs" of the same value. With that said, it can make data larger when strings are not immediately consecutive, and struggles with patterns. Strings like `ABABAB` are often converted to longer strings with RLE, even while there are repeated characters.

This program is just a small demonstration using letters; RLE can also be used with numbers, pixels, and other types of data. The program here simply prints encoded text instead of going through a workflow that compresses a file.

As for application, RLE is used in some image formats, including PDF and in medical imagery. It is particularly useful for simple graphics and black-and-white documents, where consecutive pixels often have identical values. I think this is a simple solution for compressing simple files!

## Reference

["Run-length encoding" (via Wikipedia)](https://en.wikipedia.org/wiki/Run-length_encoding)
["Kolakoski sequence" (via Wikipedia)](https://en.wikipedia.org/wiki/Kolakoski_sequence)
["Chapter 3 - Compression" (via MIT OpenCourseWare)](https://ocw.mit.edu/courses/6-050j-information-and-entropy-spring-2008/9f67d1d414e446c9b55925ab92c17c15_MIT6_050JS08_chapter3.pdf)
["Compression - Run Length Encoding" (via Kansas State University)](https://textbooks.cs.ksu.edu/cs-zero/iii-topics/15-compression-error-checking/01-rle/)