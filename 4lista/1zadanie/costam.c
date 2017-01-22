for(int i = 0; i < lengthW; i++){
   printf("i = %d j = %d\n",i,j);
   printf("Pierwsze sprawdzanie %c %c\n", wzorzec[i], lancuch[j]);

   if(lancuch[j] == wzorzec[i] || wzorzec[i] == '?' || wzorzec[i] == '*'){
      if(wzorzec[i] == '*'){
         while(wzorzec[i+1] != lancuch[j] && j < lengthL){
            printf("Drugie sprawdzanie %c j = %d \n",lancuch[j],j);
            j++;
         }
         if(j == lengthL){
            printf("Zwrocilem prawde bo jestem na koncu\n");
            return true;
         }
      }else
         j++;
   }else if(i > 1 && wzorzec[i-1] != '*' && j+1<lengthL){
      printf("Halo");
      i--;
      j++;
   }else
      return false;
}

return true;





bool sprawdzajZnaki(char *wzorzec, char *lancuch, int *i, int *j){
   int lengthW = strlen(wzorzec);
   int lengthL = strlen(lancuch);
   int x = *i;
   int y = *j;
   while(*i < lengthW && *j < lengthL && wzorzec[*i] != '*'){
      printf("Pierwsze sprawdzanie %c %c\n", wzorzec[*i], lancuch[*j]);
      if(wzorzec[*i] != lancuch[*j] && wzorzec[*i] != '?'){
         *i = x;
         *j = y;
         return false;
      }
      (*i)++;
      (*j)++;
   }
   printf("To drugie i = %d j = %d\n", *i, *j);
   return true;
}
