Welcome to Find And Replace (FAR)
This is the first version of a simple linux command line find and replace file
I am creating this with Linux in mind but hope to expand this to other operating systems soon.

Use:
To use FAR, download the source file, compile it, and add it to your PATH.
Once installed it can be called simply using the command 'far', this will prompt a series of questions to allow the program to run.
Optionaly, FAR can be called inline as shown below:
    far input.txt foo bar
    far input.txt output.txt foo bar
Either methor of running will produce the same output and results.

Limitations:
Can only support .txt files
Can only support single word finding and replacing
Does not keep formatting between input and output