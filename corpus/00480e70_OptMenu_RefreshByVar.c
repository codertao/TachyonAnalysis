
/* sweep */

void OptMenu_RefreshByVar(uint param_1)

{
  int iVar1;
  
  iVar1 = OptMenu_FindByVar(param_1 & 0x7fffffff);
  if (iVar1 != 0) {
    OptMenu_Refresh(iVar1,param_1 & 0x80000000);
  }
  return;
}

