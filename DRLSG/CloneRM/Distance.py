import editdistance
 
def Edit_distance_str_2(str1, str2):
    num_dist = editdistance.eval(str1, str2)
    num_sim = 1 - num_dist / max(len(str1), len(str2))
    # return {'dist': num_dist, 'sim': num_sim}
    return num_sim

def Edit_distance_arr_1(arr1, arr2):
    num_dist = editdistance.eval(arr1, arr2)
    num_sim = 1 - num_dist / max(len(arr1), len(arr2))
    return {'dist': num_dist, 'sim': num_sim}

def Edit_distance_arr_2(arr1, arr2):
    size1 = len(arr1) + 1
    size2 = len(arr2) + 1
    temp = [0] * (size1 * size2)
    for i in range(size1):
        temp[i] = i
    for j in range(size2):
        temp[j*size1] = j
    for i in range(1, size1):
        for j in range(1, size2):
            fit2 = j * size1
            fit1 = fit2 - size1
            val1 = min(temp[fit2 + i -1], temp[fit1 + i]) + 1
            val2 = temp[fit1 + i - 1] + int(arr1[i-1]!=arr2[j-1])
            temp[fit2 + i] = min(val1, val2)
    num_dist = temp[-1]
    num_sim = 1 - num_dist / max(len(arr1), len(arr2))
    return {'dist': num_dist, 'sim': num_sim}

def ngram_distance(str1, str2, n=2):
    tmp = ' ' * (n-1)
    str1 = tmp + str1 + tmp
    str2 = tmp + str2 + tmp
    set1 = set([str1[i:i+n] for i in range(len(str1)-(n-1))])
    set2 = set([str2[i:i+n] for i in range(len(str2)-(n-1))])
    setx = set1 & set2
    len1 = len(set1)
    len2 = len(set2)
    lenx = len(setx)
    num_dist = len1 + len2 - 2*lenx
    num_sim = 1 - num_dist / (len1 + len2)
    return {'dist': num_dist, 'sim': num_sim}

def read_file(filename):
    with open(filename,'r') as f:
        return f.read()

if __name__ == "__main__":
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument("filename1",help="the first filename")
    parser.add_argument("filename2",help="the second filename")
    args = parser.parse_args()
    file1=read_file(args.filename1)
    file2=read_file(args.filename2)
    file1=file1.replace(" ","")
    file2=file2.replace(" ","")
    print(Edit_distance_str_2(file1,file2))

