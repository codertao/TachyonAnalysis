
/* sweep */

void Ent_WriteNetLink(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x8c) != 0) &&
      (pcVar1 = *(code **)(*(int *)(param_1 + 0x8c) + 0x78), pcVar1 != (code *)0x0)) &&
     (iVar2 = (*pcVar1)(param_1,0x12,param_2), iVar2 != 0)) {
    return;
  }
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined2 *)(param_2 + 0x20) = 0;
  *(undefined2 *)(param_2 + 0x22) = 0;
  return;
}

