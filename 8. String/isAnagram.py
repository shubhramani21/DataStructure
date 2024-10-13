s = 'aabbb'
t = 'bbaaa'


s_mapping = dict()
t_mapping = dict()

for i in s:
    if i not in s_mapping.keys():
        s_mapping[i] = 1
    else:
        s_mapping[i] += 1
for i in t:
    if i not in t_mapping.keys():
        t_mapping[i] = 1
    else:
        t_mapping[i] += 1

if len(s) != len(t) or len(s_mapping.keys()) != len(t_mapping.keys()):
    print(False)
    exit(0)
print(s_mapping)
print(t_mapping)

for i in s_mapping.keys():
    if s_mapping[i] != t_mapping[i]:
        print(False)
        exit(0)

print(True)




