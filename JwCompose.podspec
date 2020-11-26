
Pod::Spec.new do |spec|

  spec.name         = "JwCompose"
  spec.version      = "0.0.7"
  spec.summary      = "A short description of JwCompose."

  spec.homepage     = "https://github.com/chenjingwei0124/JwTooler"
 
  spec.license      = "MIT"
 
  spec.author       = { "陈警卫" => "chenjingwei0124@163.com" }

  spec.source       = { :git => "https://github.com/chenjingwei0124/JwTooler.git", :tag => spec.version }

  spec.platform     = :ios, '9.0'

  spec.ios.deployment_target = '9.0'

  spec.source_files  = "JwCompose/**/*.{h,m}"
  
  spec.requires_arc = true

  spec.frameworks = 'UIKit', 'Foundation', 'QuartzCore', 'CoreText'

end
