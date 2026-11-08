
void FUN_00414520(void)

{
  undefined4 uVar1;
  
  if (DAT_005b9268 != 0) {
    DAT_005b9020 = 10;
    *(undefined4 *)(DAT_0058b064 + 0xfc) = 10;
    uVar1 = FUN_00455e60(DAT_0058b064 + 0x11c,DAT_005b1f0c + 0xd0,10);
    *(undefined4 *)(DAT_0058b064 + 0x140) = uVar1;
    maybe_log_something(s_SHIP_ENHANCED_0053416c,0xc);
    Chatter_PlayRandom(5);
  }
  return;
}

