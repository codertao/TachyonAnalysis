
/* sweep: guess */

void Mine_FindByOwnerId(int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  
  for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (((*(short *)(iVar1 + 0x76) == 3) && (**(int **)(iVar1 + 0xdc) == param_2)) &&
       (pcVar2 = (code *)(*(int **)(iVar1 + 0xdc))[0x3c], pcVar2 != (code *)0x0)) {
      (*pcVar2)(iVar1);
    }
  }
  return;
}

