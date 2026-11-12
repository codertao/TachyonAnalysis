
/* sweep: guess */

void Srv_RecvPlayerChunk(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(param_1 + 0x130) == param_2)) {
    iVar1 = *(int *)(param_1 + 300) + param_3;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + param_3 * 4;
    *(int *)(param_1 + 300) = iVar1;
    if (*(int *)(param_1 + 0x124) <= iVar1) {
      OurFreeMem(*(undefined4 *)(param_1 + 0x120));
      *(undefined4 *)(param_1 + 0x120) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
    *(uint *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + 1U | 1;
  }
  return;
}

