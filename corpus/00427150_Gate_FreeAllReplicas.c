
/* sweep */

void Gate_FreeAllReplicas(void)

{
  SpED *pSVar1;
  SpED *ent;
  
  pSVar1 = DAT_005b31c0;
  while (ent = pSVar1, ent != (SpED *)0x0) {
    pSVar1 = ent->next;
    if (ent->poolType == 10) {
      Snd3D_Release(*(undefined4 *)&ent->field_0xc8);
      *(undefined4 *)&ent->field_0xc8 = 0;
      Quad_UnlinkDynamic(ent);
      Dcb_Free(ent);
    }
  }
  return;
}

