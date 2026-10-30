
undefined4 FUN_004ab020(int param_1)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  if (DAT_0055e3e0 == 0) {
    return 0xffffffff;
  }
  DAT_0055e400 = 0;
  uVar2 = timeGetTime();
  uVar1 = uVar2 + param_1 * 1000;
  while( true ) {
    if (uVar1 <= uVar2) {
      return 0xfffffffe;
    }
    MessagePump_IdleTick();
    psVar3 = (short *)thunk_FUN_004aabb0();
    if ((psVar3 != (short *)0x0) && (*psVar3 == 0x4001)) break;
    uVar2 = timeGetTime();
  }
  DAT_0055e400 = *(undefined4 *)(psVar3 + 2);
  return 0;
}

