



class Solution:

 

    def insertionSortList(self, A):

        temp=A

        while temp!=None:

            trav=A

            while trav!=temp:

                if trav.val > temp.val:

                    trav.val,temp.val=temp.val,trav.val

                trav=trav.next

            temp=temp.next

            

        return A
