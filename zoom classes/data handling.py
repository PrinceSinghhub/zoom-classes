# data file handling
# play with data is called data file handling
# file= non voletile memory
# 1 open
# 2 red/write
# 3 close
# open()= open our file
# r,w,a=read,write,append/update
with open("arkestra.txt",'a+') as pr:

    print(pr.tell())
    pr.write("khushi\n")





# methode of opening file
# r
# w
# x = if file is already exicts ajeet ajeet error 2 same file
# a
# t = textmode defalut
# b = binaray
# + = r+

