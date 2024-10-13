def isIsomorphic(s:str,t:str): 
    
    s_mapping = {char: 0 for char in s}
    t_mapping = {char: 0 for char in t}
    
    if len(s) != len(t) or len(s_mapping.keys()) != len(t_mapping.keys()): return False


    for i in range(len(s)):
        if(s_mapping[s[i]] != t_mapping[t[i]]):
            return False
        s_mapping[s[i]] = i+1
        t_mapping[t[i]] = i+1


    return False




print(isIsomorphic("foo","bar"))