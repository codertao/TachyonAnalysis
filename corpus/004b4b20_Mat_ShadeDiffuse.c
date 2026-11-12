
/* refine: vertex colour = shade ramp[256+bias+2d] (notes/formats.md Sector lighting) */

void Mat_ShadeDiffuse(int param_1,int param_2)

{
  ushort *puVar1;
  uint uVar2;
  
  puVar1 = *(ushort **)(param_2 + 0x14);
  uVar2 = 0;
  if (*(int *)(param_2 + 0x10) != 0) {
    do {
      *(undefined4 *)((uint)puVar1[1] * 0x30 + 0x14 + *(int *)(param_1 + 0x40)) =
           *(undefined4 *)
            (&DAT_00610880 +
            (DAT_00666afc + *(char *)((uint)*puVar1 * 0x10 + 0xc + *(int *)(param_1 + 0x48)) * 2) *
            4);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 2;
    } while (uVar2 < *(uint *)(param_2 + 0x10));
  }
  return;
}

