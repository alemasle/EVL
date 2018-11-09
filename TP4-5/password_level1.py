#!/usr/bin/env python3

def mod(cyber='CyberInBretagne'):
	ret = ""
	i_mod = 0
	i = 0
	while i < 15:
		ret = ret + cyber[i_mod]
		i_mod = (i_mod + 13) % 15
		i += 1

	return ret

def xor_pass():
	tab = [0x10, 0x7, 0x3, 0x0, 0x30, 0x20, 0x0, 0x37, 0x27, 0x15, 0x11, 0x6, 0x2F, 0x1C, 0x7]
	ret = mod() + "-"
	for i in range(15):
		char = ord(ret[i]) ^ tab[i]
		ret += chr(char)
	return ret

print(xor_pass())
