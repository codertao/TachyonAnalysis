
/* sweep: guess */

void Quad_MoveList14ToDynamic(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    return;
  }
  do {
    iVar1 = *(int *)(iVar2 + 0x9c);
    Quad_LinkDynamicIfAbsent(iVar2,param_1);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

