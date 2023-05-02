"""
Reverse the provided string and return the reversed string.

        For example, "hello" should become "olleh".

Notes: 
    slice notation for a string is [start:end:step]

    str[::-1], start is not specified, which means it defaults to the beginning of the string. end is also not specified, so it defaults to the end of the string. step is specified as -1, which means that the slice should step backwards through the string, effectively reversing it.
"""


def reverse_string(str):
    return str[::-1]


result = reverse_string("Hello")
print(result)
