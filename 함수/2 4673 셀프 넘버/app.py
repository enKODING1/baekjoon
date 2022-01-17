def SelfNum():
    NotSelfNum_list = []
    SelfNum_list = []
    num = [x for x in range(1, 10001)]
    for i in range(1, 10001):
        list_number = list(map(int, str(i)))  # 10 = [1,0]
        NotSelfNum_list.append(i + sum(list_number))  # 셀프숫자 아닌것들 모아둠
    for j in num:  # num - NotSelfNum_list
        if j not in NotSelfNum_list:
            SelfNum_list.append(j)
    return SelfNum_list


data = []
data = SelfNum()
for i, v in enumerate(data):
    print(v)
