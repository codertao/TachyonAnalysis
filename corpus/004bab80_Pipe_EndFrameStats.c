
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: snapshot+clear 9 counters; fps from 16-frame GetTickCount ring */

void Pipe_EndFrameStats(void)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = &DAT_006c8f80;
  puVar4 = &DAT_006c8fa4;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_006c8f80;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_006c9008 = DAT_006c9008 + 1;
  DVar1 = GetTickCount();
  iVar2 = *(int *)(&DAT_006c8fc8 + (DAT_006c9008 & 0xf) * 4);
  *(DWORD *)(&DAT_006c8fc8 + (DAT_006c9008 & 0xf) * 4) = DVar1;
  if (DVar1 - iVar2 != 0) {
    _DAT_006c900c = _DAT_0052f000 / (float)(int)(DVar1 - iVar2);
  }
  return;
}

