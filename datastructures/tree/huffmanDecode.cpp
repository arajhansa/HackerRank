void decode_huff(node *root, string s){
    string decode = new string[500];
    int position = 0;
    node *temp = root;
    for(int i=0; s[i]!='\0'; i++){
        if(temp->left!=NULL && temp->right!=NULL){
            if(s[i]==0){
                temp = temp->left;
            } else {
                temp = temp->right;
            }
        } else {
            decode[position++] = temp->data;
            temp = root;
        }
    }
    decode[position] = '\0';
    cout<<decode<<endl;
}
