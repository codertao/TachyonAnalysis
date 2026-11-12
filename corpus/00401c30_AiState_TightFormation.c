
/* state 12 (non-wingman table): slot position lerp 1/8 per frame, copies leader
   orientation/velocity */

void AiState_TightFormation(int param_1)

{
  int iVar1;
  undefined2 uVar2;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0xf8);
  Formation_GetSlotPos(param_1,&local_c);
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar1 + 0xd4);
  uVar2 = FlightModel_SolveThrottle
                    (*(int *)(param_1 + 0x8c) + 0x84,*(undefined4 *)(iVar1 + 0xd4),param_1 + 0x10c,
                     *(uint *)(*(int *)(param_1 + 0x8c) + 0x564) & 0x400,1);
  *(undefined2 *)(param_1 + 0x312) = uVar2;
  *(int *)(param_1 + 0x34) = (local_c - *(int *)(param_1 + 0x34) >> 3) + *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x38) = (local_8 - *(int *)(param_1 + 0x38) >> 3) + *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x3c) = (local_4 - *(int *)(param_1 + 0x3c) >> 3) + *(int *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(iVar1 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(iVar1 + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(iVar1 + 0xe4);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0xa0);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar1 + 0xa8);
  return;
}

