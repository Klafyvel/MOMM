#! /usr/bin/python3

import re

gen_list = []
line_list = []

with open("CommandeMoteurs.dessous.gravure.gcode") as fic:
	print('analysing CommandeMoteurs.dessous.gravure.gcode')
	for i in fic:
		l = re.split(r' ', i)
		if re.match(r'^\(', l[0]):
			pass
		else:
			append_line = False
			for j in l:
				if re.match(r'^[A-W]', j) and j not in gen_list: # Don't want X, Y and Z actions !
					gen_list.append(j)
					append_line = True
			if append_line:
				line_list.append(i)

print(gen_list)

for i in line_list:
	print(i)