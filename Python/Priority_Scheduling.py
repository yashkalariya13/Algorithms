# Python Program For Priority

ct=0
l=[]
N=int(input("Enter the number of processes---> "))
print("Enter the process_id, Priority and Burst_time respectively:")
for _ in range(N):
    l.append(list(map(int,input().split())))

    
for i in range(N):
    for j in range(i+1,N):
        if l[i][1]>l[j][1]:
            l[i],l[j]=l[j],l[i]
i=0
while i<N:
    ct+=l[i][2]
    l[i].append(ct)
    i+=1

print("P_ID PRTY BT TAT WT")
tat,wt=0,0
for i in range(N):
    print(l[i][0],"  ",l[i][1],"  ",l[i][2],"  ",l[i][3],"  ",l[i][3]-l[i][2])
    tat+=l[i][3]
    wt+=l[i][3]-l[i][2]
print("Average Wating Time---> ",wt/N)
print("Average Turnaround Time---> ",tat/N)
