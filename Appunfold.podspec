Pod::Spec.new do |s|
  s.name         = "Appunfold"
  s.version      = "0.1.1"
  s.summary      = "USER ONBOARDING & SELF HELP FOR MOBILE"
  s.description  = <<-DESC 
  					Intelligent visual walkthroughs to handhold your users through workflows and new features.
                   DESC
  s.homepage     = "http://console.appunfold.com"
  s.platform	 = :ios, "8.0"
  s.license      = { :type => "BSD",:file=>"LICENSE.md"}
  s.author       = { "Aravind G S" => "aravind@appunfold.com" }
  s.source       = { :git => "https://github.com/appunfold/ios-sdk.git", :tag => "0.1.1" }
  s.vendored_frameworks = "SDK/appunfold.framework"
  s.requires_arc = true
end
