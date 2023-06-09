def CaesarCipherChar(c, k):
     a = "abcdefghijklmnopqrstuvwxyz"
     a2 = a.upper()
     if c.isupper():
          return (a2[(a2.index(c) + k) % len(a2)])
     elif c.islower():
          return (a[(a.index(c) + k) % len(a)])
     else:
          return c
def CaesarCipher(s, k):
     res = ''
     for c in s:
          res += CaesarCipherChar(c, k)
     return (res)
S = input()
print(CaesarCipher(S, 3))