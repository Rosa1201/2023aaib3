#開心的 +程式碼 python
#week11-1.py 主題 hash map , hash set
table = {} #python用大括號代表字典也就是 hash table (hash map , hash set)
table[9977341]=9
table[4433997]=4

print(table[9977341])#會印出9
print(table[4433997])#會印出4
#print(table[0]) #糟! 如果沒這個 key,就會爆炸!
if 0 not in table: #如果沒有在裡面
  print("table[0]不存在")
