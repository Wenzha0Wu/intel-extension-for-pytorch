// Autogenerated file by gen-common-ops.py. Do not edit directly!
#pragma once

#include <ATen/Tensor.h>

namespace torch_ipex {

class AtenIpexTypeExt {
 public:
  static void packed_add_(at::Tensor & top_half, at::Tensor & bot_half, const at::Tensor & grad, float alpha);
  static at::Tensor interaction_forward(const std::vector<at::Tensor> & input);
  static std::vector<at::Tensor> interaction_backward(const at::Tensor & grad_out, const std::vector<at::Tensor> & input);
  //static at::Tensor embedding_bag_forward(const at::Tensor &weights, const at::Tensor &inputs, const at::Tensor &offsets);
  //static at::Tensor embedding_bag_backward(const at::Tensor &grad_out, const at::Tensor &weights, const at::Tensor &inputs, const at::Tensor &offsets);
  static std::tuple<at::Tensor,at::Tensor,at::Tensor,at::Tensor>
  embedding_bag_forward(const at::Tensor & weight, const at::Tensor & indices,
      const at::Tensor & offsets, bool scale_grad_by_freq, int64_t mode, bool sparse,
      const c10::optional<at::Tensor>& per_sample_weights, bool include_last_offset);

  static at::Tensor
  embedding_bag_backward(const at::Tensor & grad, const at::Tensor & indices, const at::Tensor & offsets,
      const at::Tensor & offset2bag, const at::Tensor & bag_size, const at::Tensor & maximum_indices,
      int64_t num_weights, bool scale_grad_by_freq, int64_t mode, bool sparse,
      const c10::optional<at::Tensor>& per_sample_weights);

  static at::Tensor linear(const at::Tensor& input, const at::Tensor& weight, const c10::optional<at::Tensor>& bias);
  static at::Tensor linear_prepack_weight(const at::Tensor& weight);
  static at::Tensor linear_fuse_relu(const at::Tensor& input, const at::Tensor& weight, const c10::optional<at::Tensor>& bias);
  static std::tuple<at::Tensor, at::Tensor, at::Tensor> linear_backward(const at::Tensor& input, const at::Tensor& grad_output, const at::Tensor& weight, std::array<bool,3> output_mask);
  static at::Tensor relu_use_dst_for_bwd(const at::Tensor& grad_output, const at::Tensor& output);
  static at::Tensor adaptive_avg_pool2d(at::Tensor const& input, at::IntArrayRef output_size);
  static at::Tensor adaptive_avg_pool2d_backward(const at::Tensor& grad_output, const at::Tensor& input);
  static at::Tensor max_pooling(const at::Tensor& input, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode);
  static at::Tensor max_pooling_backward(const at::Tensor& grad_output, const at::Tensor& output, const at::Tensor& input, at::IntArrayRef kernel_size, at::IntArrayRef stride, at::IntArrayRef padding, at::IntArrayRef dilation, bool ceil_mode);
  static at::Tensor reshape(const at::Tensor& input, at::IntArrayRef size);
};

}  // namespace torch_ipex

