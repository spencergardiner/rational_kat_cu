#include <torch/extension.h>

#define CHECK_CUDA(x) TORCH_CHECK(x.is_cuda(), #x " must be a CUDA tensor")
#define CHECK_CONTIGUOUS(x) TORCH_CHECK(x.is_contiguous(), #x " must be contiguous")
#define CHECK_INPUT(x) CHECK_CUDA(x); CHECK_CONTIGUOUS(x)

torch::Tensor rational_fwd(
  torch::Tensor x, 
  torch::Tensor n, 
  torch::Tensor d);

torch::Tensor rational_fwd_cuda(
  torch::Tensor x, 
  torch::Tensor n, 
  torch::Tensor d);

torch::Tensor rational_fwd_optimized(
  torch::Tensor x, 
  torch::Tensor n, 
  torch::Tensor d);

torch::Tensor rational_fwd_cuda_optimized(
  torch::Tensor x, 
  torch::Tensor n, 
  torch::Tensor d);

torch::Tensor rational_fwd_1dgroup(
  torch::Tensor x, 
  torch::Tensor n, 
  torch::Tensor d, 
  int group);

torch::Tensor rational_fwd_cuda_1dgroup(
  torch::Tensor x, 
  torch::Tensor n, 
  torch::Tensor d, 
  int group);

std::vector<torch::Tensor> rational_bwd(
  torch::Tensor dy, 
  torch::Tensor x, 
  torch::Tensor n, 
  torch::Tensor d);

std::vector<torch::Tensor> rational_bwd_cuda(
    torch::Tensor dy, 
    torch::Tensor x, 
    torch::Tensor n, 
    torch::Tensor d);

std::vector<torch::Tensor> rational_bwd_optimized(
    torch::Tensor dy, 
    torch::Tensor x, 
    torch::Tensor n, 
    torch::Tensor d);

std::vector<torch::Tensor> rational_bwd_cuda_optimized(
    torch::Tensor dy, 
    torch::Tensor x, 
    torch::Tensor n, 
    torch::Tensor d);




