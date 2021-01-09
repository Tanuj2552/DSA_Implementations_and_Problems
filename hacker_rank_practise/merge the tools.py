def dist(s):
    str=''
    for x in s:
        if x not in str:
            str = str+x
    return str

def merge_the_tools(string, k):
    l=[]
    for x in range(0,len(string),k):
        l.append(string[x:x+k])
    for x in l:
        c=dist(x)
        print(c)

