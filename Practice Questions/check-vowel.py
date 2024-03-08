ch = input("enter a character")[0]
ch = ch.lower();
if ch in "aeiou":
    print(f"{ch} is vowel");
elif ch.isalpha():
    print(f"{ch} is consonant");
else:
    print(f"{ch} is not an alphabetic character");