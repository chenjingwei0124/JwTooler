
Pod::Spec.new do |spec|

  spec.name         = "JwCompose"
  spec.version      = "0.0.1"
  spec.summary      = "A short description of JwCompose."

  spec.homepage     = "https://github.com/chenjingwei0124/JwTooler"
 
  spec.license      = "MIT"
 
  spec.author       = { "陈警卫" => "chenjingwei0124@163.com" }

  spec.source       = { :git => "https://github.com/chenjingwei0124/JwTooler.git", :tag => spec.version }

  spec.source_files  = "JwDocTooler/JwDocTooler/JwCompose/JwCompose.h"

  spec.public_header_files = "JwDocTooler/JwDocTooler/JwCompose/JwCompose.h"
  
  spec.requires_arc = true


end
