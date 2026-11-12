
/* refine: clears vert lighting; L=sun dir, H=normalize(normalize(cam-pos)+2L)/2; both rotated into
   model space */

void Light_PrepareMesh(int param_1,int param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 0x30) != 0) {
    puVar2 = (undefined1 *)(*(int *)(param_2 + 0x48) + 0xc);
    do {
      *puVar2 = 0;
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x10;
    } while (uVar1 < *(uint *)(param_2 + 0x30));
  }
  DAT_00668f48 = DAT_00666ab0 - *(int *)(param_1 + 0x1c);
  DAT_00668f4c = DAT_00666ab4 - *(int *)(param_1 + 0x20);
  DAT_00668f50 = DAT_00666ab8 - *(int *)(param_1 + 0x24);
  call_Vec_NormalizeFast((vec3 *)&DAT_00668f48);
  DAT_00668f48 = DAT_00668f48 + DAT_0055ecac * 2;
  DAT_00668f4c = DAT_00668f4c + DAT_0055ecb0 * 2;
  DAT_00668f50 = DAT_00668f50 + DAT_0055ecb4 * 2;
  call_Vec_NormalizeFast((vec3 *)&DAT_00668f48);
  DAT_00668f48 = DAT_00668f48 >> 1;
  DAT_00668f4c = DAT_00668f4c >> 1;
  DAT_00668f50 = DAT_00668f50 >> 1;
  DAT_00668f3c = DAT_0055ecac;
  DAT_00668f40 = DAT_0055ecb0;
  DAT_00668f44 = DAT_0055ecb4;
  Rot_FromAnglesInv(&DAT_0055ed00,param_1 + 0x34);
  Rot_ApplyCurrent(&DAT_00668f48,&DAT_00668f48);
  Rot_ApplyCurrent(&DAT_00668f3c,&DAT_00668f3c);
  return;
}

