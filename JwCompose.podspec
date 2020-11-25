
Pod::Spec.new do |spec|

  spec.name         = "JwCompose"
  spec.version      = "0.0.4"
  spec.summary      = "A short description of JwCompose."

  spec.homepage     = "https://github.com/chenjingwei0124/JwTooler"
 
  spec.license      = "MIT"
 
  spec.author       = { "陈警卫" => "chenjingwei0124@163.com" }

  spec.source       = { :git => "https://github.com/chenjingwei0124/JwTooler.git", :tag => spec.version }

  spec.platform     = :ios, '9.0'

  spec.ios.deployment_target = '9.0'

  spec.source_files  = "JwTooler/JwTooler/JwCompose/**/*.{h,m}"
  
  spec.requires_arc = true

  spec.frameworks = 'UIKit', 'Foundation', 'CoreFoundation', 'QuartzCore', 'CoreGraphics', 'CoreImage', 'CoreText'

  spec.dependency 'SDWebImage'
  spec.dependency 'Masonry'
  spec.dependency 'MJRefresh'


end
