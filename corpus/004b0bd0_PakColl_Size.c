
/* hdrSize + (nVerts + nTris*6 + nNormals) * 12 */

int PakColl_Size(int param_1)

{
  return *(int *)(param_1 + 4) +
         (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) * 6 + *(int *)(param_1 + 8)) * 0xc;
}

