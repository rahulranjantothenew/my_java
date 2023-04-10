
    for(int p=1; p<=n; p++){
        for(int j=n-p; j>=1; j--){
             cout<<" ";
        }
        for(int k=1; k<=2*n-1; k++){
            if(k==1 || k==2*p-1){
                cout<<"*";