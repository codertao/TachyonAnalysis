
/* sweep */

void ModelPool_LoadList(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_3 + 4) = param_2;
  iVar2 = *param_1;
  while (iVar2 != 0) {
    ModelPool_Load(param_1[1],iVar2,param_1[3],param_1[2],param_3,param_1[4]);
    piVar1 = param_1 + 5;
    param_1 = param_1 + 5;
    iVar2 = *piVar1;
  }
  return;
}

