void getinfo(struct namect *pst)
{
    char temp[SLEN];
    printf("Please enter your first name: ");
    s_gets(temp, SLEN);

    pst->fname = (char*)malloc(strlen(temp) + 1);  // Allocate memory to hold name
    strcpy(pst->fname, temp);  // Copy name to allocated memory

    printf("Please enter your last name: ");
    s_gets(temp, SLEN);

    pst->lname=(char*)malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
}
