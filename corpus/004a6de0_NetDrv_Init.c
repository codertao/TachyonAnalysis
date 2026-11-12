
/* refine: slot 0x18 (DPlay_Init / NetSock_Init); skipped if already up */

undefined4 NetDrv_Init(void)

{
  undefined4 uVar1;
  
  if (DAT_0055e3e0 != 0) {
    return 0;
  }
  uVar1 = (**(code **)(PTR_PTR_0055e458 + 0x18))();
  return uVar1;
}

