
/* refine: slot 0x74: pump messages up to N s until 0x4001 arrives */

undefined4 DPlay_WaitForServerId(int param_1)

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
    psVar3 = (short *)DPlay_GetMessage();
    if ((psVar3 != (short *)0x0) && (*psVar3 == 0x4001)) break;
    uVar2 = timeGetTime();
  }
  DAT_0055e400 = *(undefined4 *)(psVar3 + 2);
  return 0;
}

