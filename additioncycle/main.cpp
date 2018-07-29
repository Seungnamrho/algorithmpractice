//
//  main.cpp
//  additioncycle
//
//  Created by SN Rho on 29/07/2018.
//  Copyright © 2018 SN Rho. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

struct node {
    string label;
    node* left_child;
    node* right_child;
};

node* construction(vector<int>& preorder, vector<int>& inorder) {
    node root;
    node* rootptr = &root;
    vector<int> left_inorder;
    vector<int> right_inorder;
    rootptr->label = preorder[0];
    return rootptr;
}

//original이라는 int형 array를 받아서, 시작 index~ 끝 index를 받아 sub array를 return한다.
vector<int> subvector(vector<int> original, int start_idx, int final_idx) {
    return vector<int>(original.begin()+start_idx, original.begin()+final_idx +1);
}


int main(int argc, const char* argv[]) {
    vector<int> test = {1,2,3,4,5,6,7,8}, another;
    another = subvector(test, 1, 3);
    for(int i=0; i<another.size();i++){
        cout << another[i];
    }
    int node_no;
    cin >> node_no;
    vector<int> preorder, inorder;
    //temp 변수는 cin으로 사용자로부터 input을 받고 vector에 값을 넣기 위해 선언해 준 중간 전달값이라고 하겠다.
    int temp;
    //preorder의 배열을 받는다.
    for(int i =0; i<node_no; i++) {
        cin >> temp;
        preorder.push_back(temp);
    }
    //inorder의 배열을 받는다.
    for(int i =0; i<node_no; i++) {
        cin >> temp;
        inorder.push_back(temp);
    }
    construction(preorder, inorder);
    return 0;
}
