
/* refine: &LOD0 part 0 */

int Model_GetRootPart(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x90) + 4) + 0xc;
}

