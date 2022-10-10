VOWELS = set("aeiou")

def vowel_count(phrase):
    """Returns frequency map of vowels, case-insensitive.

        >>> vowel_count('hello world')
        {'e': 1, 'o': 2}

        >>> vowel_count('HOW ARE YOU? i am great!')
        {'o': 2, 'a': 3, 'e': 2, 'u': 1, 'i': 1}
    """

    phrase = phrase.lower()
    counter = {}

    for ltr in phrase:
        if ltr in VOWELS:
            counter[ltr] = counter.get(ltr, 0) + 1

    return counter
