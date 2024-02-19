#jo baar baar append ka use  na karke hum
#list me hi ek hi sath likh sakte hai
list_of_cloud=["aws","azure","gcp","oracle","alibaba"]
#there is alreaday a number assign in this like 
# 0 for aws,1 for azzure and ...
# its always start form 0
list_of_class=["dev","prod","test"]

print(list_of_cloud)
print(list_of_cloud[4])
#it print alibaba because alibaba is at number 5 and its value is 4
print(list_of_class[1])

#list itteration
for cloud in list_of_cloud:
    if cloud=="aws":
        print("Aws Is Best Cloud")

#dictionary
dict_of_cloud={
    "aws":"amazon web server",
    "gcp":"Google Cloud Platform",
    "azzure":"Mirosoft Azzure"
}
#ye ek dictionary ban gaya jisme aws gcp aur azzure ki value assign hai
print(dict_of_cloud["aws"])
#or isko aise bhi likh sakte hai
print(dict_of_cloud.get("aws"))

print(dict_of_cloud.get("oracle","Not Found"))
#ye ek function ki tarah kaam karta hai agar dictionary me wo value nahi milega
#to aise likhne se not found print karega ye error nahi dega
dict_of_cloud.update({"linecode":"linecode cloud"})
#isse dictionary update ho jayega aur isme ye word add ho jayenge
print(dict_of_cloud)